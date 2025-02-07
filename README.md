# Horse.h

class Horse
    
create private variables position, id, and trackLength
    
create public methods Horse(), init(), advance(), printLane(), and is Winner()

# Horse.cpp

Horse()
    
give position, id, and trackLength starting values

init()
    
get id and trackLength values and give them to horse

advance()
    
flip a coin
    
if coin lands heads
        
move the horse forward

printLane()
    
for the trackLength
        
if it is the horse's position
            
print the horse id
        
otherwise
            
print a .

isWinner()
    
if the horse is at the end of the track
        
print that the horse won
        
return true
    
otherwise
        
return false

# Race.h

class Race
    
create private array horses[5] from Horse class
    
create public methods Race() and run()

# Race.cpp

Race()
    
fill in the array of of horses by giving id and trackLength to Horse

run()
    
keepGoing = true
    
while keepGoing
        
for each horse
            
advance horse
            
printLane horse
            
if the horse won
                
keepGoing = false
        
have user press enter to do another turn

# main.cpp

main()

create r with class Race
    
r.run()
