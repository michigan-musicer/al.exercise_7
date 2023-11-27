exercises: e7_exercises.c
	gcc e7_exercises.c e7_exercises.h -o exercises
	./exercises

# should not be accessible to students before solution is posted.
exercises_solution: e7_exercises_solutions.c
	gcc e7_exercises_solutions.c e7_exercises.h -o exercises_solution
	./exercises_solution

in_class: e7_in_class_practice.c
	gcc e7_in_class_practice.c e7_in_class_practice.h -O3 -o in_class
	./in_class

clean: 
	rm exercises exercises_solution in_class 
