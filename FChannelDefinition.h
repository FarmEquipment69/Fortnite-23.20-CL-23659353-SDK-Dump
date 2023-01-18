// ScriptStruct /Script/Engine.ChannelDefinition
// Size: 0x18
struct FChannelDefinition
{
	struct FName ChannelName; // 0x0 (0x4)
	struct FName ClassName; // 0x4 (0x4)
	unsigned char ChannelClass_8[0x8]; // 0x8 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
	int StaticChannelIndex; // 0x10 (0x4)
	unsigned char bTickOnCreate; // 0x14 (0x1)
	unsigned char bServerOpen; // 0x14 (0x1)
	unsigned char bClientOpen; // 0x14 (0x1)
	unsigned char bInitialServer; // 0x14 (0x1)
	unsigned char bInitialClient; // 0x14 (0x1)
	unsigned char padding_15[0x3]; // 0x15 (0x3)
};

