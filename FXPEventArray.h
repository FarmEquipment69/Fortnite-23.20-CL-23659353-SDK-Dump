// ScriptStruct /Script/FortniteGame.XPEventArray
// Size: 0x120
struct FXPEventArray : FFastArraySerializer
{
	struct TArray<struct FXPEventEntry> Entries; // 0x108 (0x10)
	class UFortPlayerControllerAthenaXPComponent* ParentComp; // 0x118 (0x8)
};

