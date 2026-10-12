# private
class Student:
    __marks = 200
    def show(self):
        print(self.__marks)

S1 = Student()
# print(S1.__marks)
S1.show()


class codeDb:
    _tier = 2

class course(codeDb):
    def courseName(self):
        self._tier = "Python"
        print(self._tier)
        self._tier = "Java"
        print(self._tier)
        self._tier = "HTML"
        print(self._tier)
        self._tier = "CSS"
        print(self._tier)
        self._tier = "JS"
        print(self._tier)
        self._tier = "C"
        print(self._tier)
        self._tier = "C++"
        print(self._tier)

c1 = course()
c1.courseName()