#TO DO: alterar o make file para que ele funcione com subdiretorios em src

# Definir o compilador
CXX := g++

# Definir variáveis do projeto
TARGET := coleta_seletiva
SRCDIR := src
BUILDDIR := bin

# Encontrar todos os arquivos .cpp no diretório src e armazenar em SRCS
SOURCES := $(shell find $(SRCDIR) -type f -name *.cpp)

# Gerar os objetos para cada arquivo .cpp encontrado em SOURCES
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.cpp=.o))

# Linkar e compilar
$(TARGET): $(OBJECTS)
	@echo " Linkando..."
	@echo " $(CXX) $^ -o $(TARGET)"; $(CXX) $^ -o $(TARGET)

# Compilar os arquivos .cpp para .o e colocar na pasta bin
$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	@if [ ! -d $(BUILDDIR) ]; then mkdir -p $(BUILDDIR); fi
	@echo " Compilando $<..."
	@echo " $(CXX) -c -o $@ $<"; $(CXX) -c -o $@ $<
	@echo " "

# Limpar
.PHONY: clean

clean:
	@echo " Limpando..."
	@echo " $(RM) -r $(BUILDDIR) $(TARGET)"; $(RM) -r $(BUILDDIR) $(TARGET)

# Executar
.PHONY: run

run: $(TARGET)
	@echo " Executando..."
	@./$(TARGET)