# monkey-model-kit
This project is the first of my suite of usefull (not really ?) apps.

Monkey ModelKit (shortenned in MMK or MKMK/MkMK) is a CLI app supposed to help model kit builders to keep track of their build times and collection price.

You can create Projects, which will keep all your model kit related data such as :

    - The grade of the build (entry to perfect grade for now)
    - Name of the said  model kit
    - Price of the model kit
    - Total time to build the model kit

and create Project time lists that you will be able to modify by adding times manually in the CLI to calculate the Total time.

 The Project's files will be stored as [this file](DataFiles/User1.txt) or [this one](DataFiles/User2.txt)

# Installation (mmk alpha 0.1)

For now, to install the "app", you must download the repo and use the `cmake` command. This will build the add files and especially a Makefile. <br>
Once this is done, open a terminal in the directory where is the Makefile (and the rest of the files are) and execute `make`<br>
This will again create a new file called MMK, this one tho will be the binary that will be executable.

Now, when you'll type ./MMK {username}, <br>
MMK will create a directory called `Gunpla Projects` in your `/home/User/Documents` directory if it doesn't already exists and create a file named `{Username}.txt`, again if it doesn't already exists.<br>

For **now**, its all it does

# Remaining to do before alpha 1.0 :
- [x] Create User files if it doesn't already exist, open it if it does
- [ ] Create Gunpla Projects structures (2 *chars, 1 double, 3 ints)
- [ ] Create Project printing functions

<br>
<br>
<br>

## Have fun building, and keeping track of those good memories !
![smoile](https://user-images.githubusercontent.com/48187939/148104181-08977639-c1a6-4538-acc3-6bbb2c32a19c.png)
