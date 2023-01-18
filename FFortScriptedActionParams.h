// ScriptStruct /Script/FortniteGame.FortScriptedActionParams
// Size: 0x30
struct FFortScriptedActionParams
{
	class AFortPlayerController* Player; // 0x0 (0x8)
	enum EFortScriptedActionSource SourceType; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	class UFortItem* SourceItem; // 0x10 (0x8)
	struct FDataTableRowHandle SourceData; // 0x18 (0x10)
	struct FName SourceName; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

