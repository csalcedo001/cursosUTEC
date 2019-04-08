import java.util.Collection;

public class Course {
    private String name;
    private Collection<Student> students;

    public void setName(String name) {
        this.name = name;
    }

    public void setStudents(Collection<Student> students) {
        this.students = students;
    }

    public String getName() {
        return name;
    }

    public Collection<Student> getStudents() {
        return students;
    }

    public void removeStudent(Student student) {
        students.remove(student);
    }
}
