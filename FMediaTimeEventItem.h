// ScriptStruct /Script/PapayaTimedEvents.MediaTimeEventItem
// Size: 0x38
struct FMediaTimeEventItem : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FString EventName; // 0x10 (0x10)
	int64_t Time; // 0x20 (0x8)
	struct FString Parameter; // 0x28 (0x10)
};

