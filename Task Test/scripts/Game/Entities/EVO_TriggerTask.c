[EntityEditorProps(category: "GameScripted/ScriptWizard", description: "ScriptWizard generated script file.")]
class EVO_TriggerTaskClass : SCR_TriggerTaskClass
{
	// prefab properties here
}

//------------------------------------------------------------------------------------------------
/*!
	Class generated via ScriptWizard.
*/
class EVO_TriggerTaskData : SCR_TriggerTaskData
{
};

[BaseContainerProps()]
class EVO_TriggerTaskSupportClass: SCR_TriggerTaskSupportClass
{
	override SCR_BaseTaskData CreateTaskData()
	{
		return new EVO_TriggerTaskData();
	}
	
	void EVO_TriggerTaskSupportClass()
	{
		m_TypeName = EVO_TriggerTask;
	}
}

class EVO_TriggerTask : SCR_TriggerTask
{
	[Attribute()]
	string a_factionKey;
}
