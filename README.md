# AR-Tutorial-Mission

This is a tutorial mission configured for very simple COOP mission creation.

This is a simple clear 2 objective areas which will then end the mission. There are no enemies present on this mission.

The 4 triggers that are present in the world need to remain. These are an init (which clears the task complete variables), an end mission trigger (once all variables are true then end the mission) and 2 task triggers.

Each of the 2 task triggers has its own script that adds to the "onActivate" class. This uses a setter class to turn a variable to true which is then monitored in the end mission trigger.

Credit to DasCapschen for the tutorial on the task manager as the code from his video is used here.
