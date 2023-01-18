// ScriptStruct /Script/FortniteGame.AthenaTravelLogEntry
// Size: 0xf0
struct FAthenaTravelLogEntry
{
	float Time; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FVector Position; // 0x8 (0x18)
	struct FRotator Rotation; // 0x20 (0x18)
	enum EAthenaTravelEventType Type; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	struct FName InstigatorName; // 0x3c (0x4)
	struct FUniqueNetIdRepl InstigatorId; // 0x40 (0x30)
	enum EAthenaTravelLogPlayerType InstigatorPlayerType; // 0x70 (0x1)
	unsigned char unreflected_71[0x3]; // 0x71 (0x3) 
	struct FName ReceiverName; // 0x74 (0x4)
	struct FUniqueNetIdRepl ReceiverId; // 0x78 (0x30)
	enum EAthenaTravelLogPlayerType ReceiverPlayerType; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x3]; // 0xa9 (0x3) 
	float Value; // 0xac (0x4)
	struct FJsonObjectWrapper Meta; // 0xb0 (0x20)
	struct FGameplayTagContainer LocationPOITags; // 0xd0 (0x20)
};

