# print("Hello welcome to python",end="-")
# print("This first class of python")

# print("Hello This Basic Print Statement","This is also a very basic step",sep=",")

# dynamic data type for variable

a = 10
print(a)
# int
a = 10.5
print(a)
# float

# datatype
# int 
# float
# string
# boolean

# complex
# list
lis = [10,20,30,40,50]
# print(lis[0])
# # mutable
# lis[2] = 70
# print(lis)
# tuple
# lis = (10,20,30,40,50)
# print(lis[0])
# lis[0] = 60
# print(lis)
# # set
# # it will remove duplicates
# s = {70,80,90,70,60,50,80,60,80}
# print(s)
# # dict
# person = {
#     "name":"xyz",
#     "age":20,
#     "course":"python"
# }
# print(person)


persons = [
    {
    "name":"xyz",
    "age":20,
    "course":"python"
},
{
    "name":"abc",
    "age":20,
    "course":"Java"
},
{
    "name":"cef",
    "age":20,
    "course":"React",
    "status":{
        "mode of class":"online",
        "fees":"Paid"
    }
}
]

print(persons[0])
print(persons[2]["name"],persons[2]["course"],persons[2]["status"]["fees"])