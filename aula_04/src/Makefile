ifndef BUILD_DIR
	BUILD_DIR=.
endif

CXX=g++
LIBS=../include
FLAGS=-std=c++11 -I$(LIBS)

all: $(BUILD_DIR)/main.o $(BUILD_DIR)/aluno.o $(BUILD_DIR)/clock.o $(BUILD_DIR)/calendar.o $(BUILD_DIR)/clock_calendar.o $(BUILD_DIR)/menu.o $(BUILD_DIR)/pessoa.o $(BUILD_DIR)/professor.o $(BUILD_DIR)/system.o $(BUILD_DIR)/turma.o

$(BUILD_DIR)/main.o: main.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/aluno.o: aluno.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/clock.o: clock.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/calendar.o: calendar.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/clock_calendar.o: clock_calendar.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/menu.o: menu.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/pessoa.o: pessoa.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/professor.o: professor.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/system.o: system.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(BUILD_DIR)/turma.o: turma.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm $(BUILD_DIR)/*.o
