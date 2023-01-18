// ScriptStruct /Script/Engine.NewLevelInstanceParams
// Size: 0x48
struct FNewLevelInstanceParams
{
	enum ELevelInstanceCreationType Type; // 0x0 (0x1)
	enum ELevelInstancePivotType PivotType; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	class AActor* PivotActor; // 0x8 (0x8)
	bool bAlwaysShowDialog; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	class UWorld* TemplateWorld; // 0x18 (0x8)
	struct FString LevelPackageName; // 0x20 (0x10)
	bool bPromptForSave; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	class UClass* LevelInstanceClass; // 0x38 (0x8)
	bool bExternalActors; // 0x40 (0x1)
	bool bForceExternalActors; // 0x41 (0x1)
	bool bHideCreationType; // 0x42 (0x1)
	unsigned char padding_43[0x5]; // 0x43 (0x5)
};

