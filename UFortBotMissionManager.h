// Class /Script/FortniteAI.FortBotMissionManager
// Size: 0xd0
class UFortBotMissionManager : public UObject
{
	struct TWeakObjectPtr<class UClass> BotPawnClass; // 0x28 (0x28)
	struct TArray<class AFortPawn*> BotPawns; // 0x50 (0x10)
	struct TArray<class UFortBotMissionLogic*> ActiveMissionsLogicData; // 0x60 (0x10)
	class UFortBotMissionLogic* PrimaryMissionLogicData; // 0x70 (0x8)
	unsigned char padding_78[0x58]; // 0x78 (0x58)
};

