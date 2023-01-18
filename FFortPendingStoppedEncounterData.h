// ScriptStruct /Script/FortniteAI.FortPendingStoppedEncounterData
// Size: 0x10
struct FFortPendingStoppedEncounterData
{
	class UFortAIEncounterInfo* Encounter; // 0x0 (0x8)
	enum EFortObjectiveStatus ObjectiveStatus; // 0x8 (0x1)
	bool bForceDestroyAI; // 0x9 (0x1)
	bool bEncounterCompletedSuccessfully; // 0xa (0x1)
	unsigned char padding_b[0x5]; // 0xb (0x5)
};

