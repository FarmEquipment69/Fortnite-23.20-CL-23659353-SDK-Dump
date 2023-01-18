// ScriptStruct /Script/FortniteGameFramework.StateChangeData
// Size: 0x28
struct FStateChangeData : FFastArraySerializerItem
{
	int StateTreeDataHandle; // 0xc (0x4)
	int Handle; // 0x10 (0x4)
	int StateIdentifier; // 0x14 (0x4)
	class UStateTreeTaskObject* StateObject; // 0x18 (0x8)
	enum ETaskObjectStateChangeType StateChangeType; // 0x20 (0x1)
	unsigned char padding_21[0x7]; // 0x21 (0x7)
};

