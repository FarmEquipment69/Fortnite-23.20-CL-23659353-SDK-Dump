// ScriptStruct /Script/FortniteUI.NotificationWidgetClass
// Size: 0x20
struct FNotificationWidgetClass
{
	class UClass* NotificationWidgetClass; // 0x0 (0x8)
	int InitialPoolSize; // 0x8 (0x4)
	bool bCanIncreasePoolSizeAtRunTime; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct TArray<class UFortNotificationEntry*> WidgetPool; // 0x10 (0x10)
};

