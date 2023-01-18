// ScriptStruct /Script/FortniteGame.FortSourceWorldAndOverlayWorld
// Size: 0x48
struct FFortSourceWorldAndOverlayWorld
{
	bool bSpecifySourceWorld; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString SourceWorldString; // 0x8 (0x10)
	struct TWeakObjectPtr<class UWorld> OverlayWorld; // 0x18 (0x28)
	bool bServerOnly; // 0x40 (0x1)
	unsigned char padding_41[0x7]; // 0x41 (0x7)
};

