import os
def commit(mes):
    # add the staged files to the commit
    os.system("git add .")
    # commit the changes with a message
    os.system(f"git commit -m \"{commit_message}\"")

def push():
    pass


# commit and push the changes to the remote repository
commit_message = "This is practise commit message"

commit(commit_message)
