#program to show inheritance

class Parent:
    def __init__(self):
        print("Parent constructor")
    def parentMethod(self):
        print("Parent method")
    def setAttr(self, attr):
        Parent.attr = attr
    def getAttr(self):
        print("Parent attribute: ", Parent.attr)


class Child(Parent):
    def __init__(self):
        print("Child constructor")
    def childMethod(self):
        print("Child method")


c = Child()
c.childMethod()
c.parentMethod()
c.setAttr(200)
c.getAttr()


