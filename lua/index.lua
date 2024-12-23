local prev_path = package.path
package.path = "lua/?.lua;../lua/?.lua;" ..package.path
local controls = require("controls")
package.path = prev_path

if(CMD == "CREATE") then
    -- create a CORTE
    print("creating")
elseif (CMD == "ADD") then
    print("adding records or an entire SEV/CORTE, etc")
elseif (CMD == "DELETE") then
    -- delete a CORTE
    print("deleting")
elseif (CMD == "UPDATE") then
    -- update an specfic CORTE
    print("updating")
elseif (CMD == "CORTE") then
    -- look in database for some data to build a CORTE
    print("check in database")
    if (nameCORTE ~= nil) then
        print("CORTE name is "..nameCORTE)
    else
        print("there's not a CORTE")
    end
elseif (CMD == "BUILDCORTE") then 
    print("building CORTE")
elseif (CMD == "TOMOMANAGER") then
    -- I must open a new window with that allows managementof a grid in depth
    -- and simultaneosly to build the tomography along each value is inserted
    print("tomo manager started")
elseif (CMD == "BUILD") then
    print("build data")
elseif (CMD == "DISPLAY") then
    print("display data")
elseif (CMD == "GRAPH") then
    print("graphing")
elseif (CMD == "SEIS") then
    print("seismic window working")
    print("I should try to display traces here")
elseif (CMD == "EVENT") then
    if (COMBINATION == "C") then
        print("control C")
        controls.service()
    elseif (COMBINATION == "R") then
        print("control R")
    elseif (COMBINATION == "Z") then
        print("control Z")
    elseif (COMBINATION == "X") then
        print("control X")
    elseif (COMBINATION == "V") then
        print("control V")
    end
end
