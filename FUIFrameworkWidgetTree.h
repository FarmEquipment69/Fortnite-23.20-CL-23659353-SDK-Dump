// ScriptStruct /Script/UIFramework.UIFrameworkWidgetTree
// Size: 0x1f8
struct FUIFrameworkWidgetTree : FFastArraySerializer
{
	unsigned char unreflected_108[0x30]; // 0x108 (0x30) 
	struct TArray<struct FUIFrameworkWidgetTreeEntry> Entries; // 0x138 (0x10)
	class AActor* ReplicatedOwner; // 0x148 (0x8)
	unsigned char padding_150[0xa8]; // 0x150 (0xa8)
};

