// ScriptStruct /Script/FortniteGame.FortDamageNumberInfo
// Size: 0xa8
struct FFortDamageNumberInfo
{
	struct FVector WorldLocation; // 0x0 (0x18)
	struct FVector HitNormal; // 0x18 (0x18)
	bool bIsCriticalDamage; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	int Damage; // 0x34 (0x4)
	enum EFortDamageNumberType DamageNumberType; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	float VisualDamageScale; // 0x3c (0x4)
	enum EFortElementalDamageType ElementalDamageType; // 0x40 (0x1)
	enum EStatCategory ScoreType; // 0x41 (0x1)
	bool bAttachScoreNumberToPlayer; // 0x42 (0x1)
	unsigned char unreflected_43[0x5]; // 0x43 (0x5) 
	class UStaticMeshComponent* StaticMeshComponent; // 0x48 (0x8)
	struct TArray<class UMaterialInstanceDynamic*> MeshMIDs; // 0x50 (0x10)
	float MeshMIDMoveToCameraValue; // 0x60 (0x4)
	unsigned char unreflected_64[0x4]; // 0x64 (0x4) 
	struct TArray<int> DamageNumberArray; // 0x68 (0x10)
	struct FGameplayTagContainer DamagedActorTags; // 0x78 (0x20)
	struct TWeakObjectPtr<class AActor> DamagedActor; // 0x98 (0x8)
	struct TWeakObjectPtr<class APawn> DamageCauser; // 0xa0 (0x8)
};

