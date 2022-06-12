class ScenarioVarsClass
{
	static private bool m_bTaskA;
	static private bool m_bTaskB;
	
	void MyClass() // constructor method
	{
		m_bTaskA = false;
		m_bTaskB = false;
	}

	static int GetTaskAState() // task A state getter
	{
		return m_bTaskA;
	}

	static void SetTaskAState(bool state) // task A state setter - only run on server
	{
		m_bTaskA = state;
	}
	
	static int GetTaskBState() // task B state getter
	{
		return m_bTaskB;
	}

	static void SetTaskBState(bool state) // task B state setter - only run on server
	{
		m_bTaskB = state;
	}
}