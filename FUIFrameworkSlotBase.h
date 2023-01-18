// ScriptStruct /Script/UIFramework.UIFrameworkSlotBase
// Size: 0x28
struct FUIFrameworkSlotBase : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class UUIFrameworkWidget* Widget; // 0x10 (0x8)
	struct FUIFrameworkWidgetId* WidgetId; // 0x18 (0x8)
	struct FUIFrameworkWidgetId* LocalPreviousWidgetId; // 0x20 (0x8)
};

