// ScriptStruct /Script/FortniteGame.WidgetMappingContainer
// Size: 0x68
struct FWidgetMappingContainer
{
	struct FGameplayTag LegacyTag; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FWidgetMapping DefaultMapping; // 0x8 (0x50)
	struct TArray<struct FWidgetMapping> ContextMappings; // 0x58 (0x10)
};

