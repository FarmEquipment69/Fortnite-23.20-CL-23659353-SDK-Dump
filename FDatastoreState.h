// ScriptStruct /Script/VGameplayRst.DatastoreState
// Size: 0x128
struct FDatastoreState : FFastArraySerializer
{
	unsigned char unreflected_108[0x8]; // 0x108 (0x8) 
	struct TArray<struct FDatastoreEntry> EntriesArray; // 0x110 (0x10)
	class UDatastoreComponentBase* OwningComponent; // 0x120 (0x8)
};

