// ScriptStruct /Script/FortniteGame.StenciledActorData
// Size: 0x80
struct FStenciledActorData
{
	struct FString GroupIdentifier; // 0x0 (0x10)
	float Duration; // 0x10 (0x4)
	float StepTime; // 0x14 (0x4)
	enum EShareActorWith ShareActorWith; // 0x18 (0x1)
	unsigned char ShareActorWithMask; // 0x19 (0x1)
	unsigned char DisplayTeamOverride; // 0x1a (0x1)
	unsigned char unreflected_1b[0x5]; // 0x1b (0x5) 
	struct FIndicatedActorParticleSystemData ParticleSystemData; // 0x20 (0x48)
	class USoundBase* sound; // 0x68 (0x8)
	struct FName FriendlyStencilName; // 0x70 (0x4)
	struct FName EnemyStencilName; // 0x74 (0x4)
	unsigned char FriendlyStencilIndex; // 0x78 (0x1)
	unsigned char EnemyStencilIndex; // 0x79 (0x1)
	unsigned char padding_7a[0x6]; // 0x7a (0x6)
};

