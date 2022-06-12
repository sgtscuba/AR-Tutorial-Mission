[EntityEditorProps(category: "GameScripted/ScriptWizard", description: "ScriptWizard generated script file.")]
class EVO_TaskManagerClass : SCR_BaseTaskManagerClass
{
	// prefab properties here
}

//------------------------------------------------------------------------------------------------
/*!
	Class generated via ScriptWizard.
*/
class EVO_TaskManager : SCR_BaseTaskManager
{
	override void EOnInit(IEntity owner)
	{
		super.EOnInit(owner);
		
		// only run on Server 
		if(IsProxy())
		{
			return;
		}
		SetFactionForTasks();
		
	}
	void SetFactionForTasks()
	{
		FactionManager facMan = GetGame().GetFactionManager();
		if(!facMan)
		{
			Print("No faction manager present", LogLevel.ERROR);
			return;
		}
		
		foreach(SCR_BaseTask baseTask : m_aTaskList)
		{
			EVO_TriggerTask task = EVO_TriggerTask.Cast(baseTask);
			if(task)
			{
				Faction faction = facMan.GetFactionByKey(task.a_factionKey);
				SetTaskFaction(task, faction);
			}
		}
	}
	
	// every time a player joins the game, even JIP it gets called
	override void OnPlayerRegistered(int registeredPlayerID)
	{
		super.OnPlayerRegistered(registeredPlayerID);
		
		if(IsProxy()) return;
		
		SetFactionForTasks();
	}
}
