// ScriptStruct /Script/FortniteGame.FortInputContextCustomKeybindingMap
// Size: 0x58
struct FFortInputContextCustomKeybindingMap
{
	struct FName InputMappingContextName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TMap<enum ECommonInputType, struct FFortCustomKeybindingContainer> CustomKeyBindingsPerInputType; // 0x8 (0x50)
};

