// ScriptStruct /Script/UIFramework.UIFrameworkWidgetTreeEntry
// Size: 0x30
struct FUIFrameworkWidgetTreeEntry : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class UUIFrameworkWidget* Parent; // 0x10 (0x8)
	class UUIFrameworkWidget* Child; // 0x18 (0x8)
	struct FUIFrameworkWidgetId* ParentId; // 0x20 (0x8)
	struct FUIFrameworkWidgetId* ChildId; // 0x28 (0x8)
};

