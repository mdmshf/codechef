class tree:
    def __init__(self,key):
        self.left=None
        self.right=None
        self.val=key
def insert(root,a):
    if(root.left==None and a<root.val):
        root.left=tree(a)
    elif(root.right==None and a>root.val):
        root.right=tree(a)
    elif(root.left!=None and a<root.val):
        insert(root.left,a)
    elif(root.right!=None and a>root.val):
        insert(root.right,a)
    else:
        pass
def delete(root,a):
    if(root==None):
        return root
    elif(root.left!=None and a<root.val):
        root.left=delete(root.left,a)
    elif(root.right!=None and a>root.val):
        root.right=delete(root.right,a)
    elif(a==root.val):
        if(root.right==None and root.left==None):
            root=None
            return root
        elif(root.right!=None and root.left==None):
            root=root.right
            return root
        elif(root.right==None and root.left!=None):
            root=root.left
            return root
        elif(root.right!=None and root.left!=None):
            temp=root.right
            while(temp.left!=None):
                temp=temp.left
            root.val=temp.val
            root.right=delete(root.right,temp.val)
        else:
            pass
    else:
         print ("not present")
    return root
def search(root,a):
    if(root==None or a==root.val):
        return root
    elif(a<root.val):
        return search(root.left,a)
    elif(a>root.val):
        return search(root.right,a)
def printinorder(root):
    if(root):
        printinorder(root.left)
        print(root.val,end=" ")
        printinorder(root.right)
def printpreorder(root):
    if(root):
        print(root.val,end=" ")
        printpreorder(root.left)
        printpreorder(root.right)
def printpostorder(root):
    if(root):
        printpostorder(root.left)
        printpostorder(root.right)
        print(root.val,end=" ")
def traversal():    
    print("\ninorder traversal")
    printinorder(root)
    print("\npreorder traversal")
    printpreorder(root)
    print("\npostorder traversal")
    printpostorder(root)
print("Enter no of nodes")
n=int(input())
print("Enter nodes")
print("Enter node",1)
a=int(input())
root=tree(a)
for i in range(n-1):
    print("\nEnter node",i+2)
    a=int(input())
    insert(root,a)
    traversal()
while(a!=-1):
    print("\nEnter element to search or enter -1 to exit")
    a=int(input())
    if(search(root,a)):
        print("Element",a,"found")
    else:
        print("Element",a,"not found")
while(a!=-2):
    print("\nEnter element to delete or enter -2 to exit")
    a=int(input())
    root=delete(root,a)
    if(root):
        print("Element",a,"deleted")
    else:
        print("Element",a,"deleted , tree empty")
    traversal()
