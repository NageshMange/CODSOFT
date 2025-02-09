#include <iostream>
#include <vector>
#include <string>
using namespace std;
//Structure of ToDoList
class ToDoList {
private:
    //Structure of Task
    struct Task {
        string description;
        bool completed;
    };
    vector <Task> tasks;

public:
    void addTask(const string &task) {
        tasks.push_back({task, false});
        cout << "Added task: \"" << task << "\"\n";
    }

    void viewTasks() const {
        if (tasks.empty()) {
            cout << "No tasks in the list.\n";
            return;
        }
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << (tasks[i].completed ? "[✓] " : "[ ] ") << tasks[i].description << "\n";
        }
    }

    void markCompleted(int taskNumber) {
        if (taskNumber > 0 && taskNumber <= static_cast<int>(tasks.size())) {
            tasks[taskNumber - 1].completed = true;
            cout << "Marked task " << taskNumber << " as completed.\n";
        } else {
            cout << "Invalid task number.\n";
        }
    }

    void removeTask(int taskNumber) {
        if (taskNumber > 0 && taskNumber <= static_cast<int>(tasks.size())) {
            cout << "Removed task: \"" << tasks[taskNumber - 1].description << "\"\n";
            tasks.erase(tasks.begin() + taskNumber - 1);
        } else {
            cout << "Invalid task number.\n";
        }
    }
};

int main() {
    ToDoList todo;
    while (true) {
        cout << "\nTo-Do List Manager:\n";
        cout << "1. Add Task\n2. View Tasks\n3. Mark Task as Completed\n4. Remove Task\n5. Exit\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        cin.ignore(); // Clear newline character

        if (choice == 1) {
            cout << "Enter the task: ";
            string task;
            getline(cin, task);
            todo.addTask(task);
            
        } 
        else if (choice == 2) {
            todo.viewTasks();
            
        } 
        else if (choice == 3) {
            cout << "Enter task number to mark as completed: ";
            int taskNumber;
            cin >> taskNumber;
            todo.markCompleted(taskNumber);
            
        } 
        else if (choice == 4) {
            cout << "Enter task number to remove: ";
            int taskNumber;
            cin >> taskNumber;
            todo.removeTask(taskNumber);
            
        } 
        else if (choice == 5) {
            cout << "Exiting... Goodbye!\n";
            
        } 
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    
    }
    return 0;
}
