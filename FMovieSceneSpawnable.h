// ScriptStruct /Script/MovieScene.MovieSceneSpawnable
// Size: 0xc0
struct FMovieSceneSpawnable
{
	struct FTransform SpawnTransform; // 0x0 (0x60)
	struct TArray<struct FName> Tags; // 0x60 (0x10)
	bool bContinuouslyRespawn; // 0x70 (0x1)
	bool bNetAddressableName; // 0x71 (0x1)
	bool bEvaluateTracksWhenNotSpawned; // 0x72 (0x1)
	unsigned char unreflected_73[0x1]; // 0x73 (0x1) 
	struct FGuid Guid; // 0x74 (0x10)
	unsigned char unreflected_84[0x4]; // 0x84 (0x4) 
	struct FString Name; // 0x88 (0x10)
	class UObject* ObjectTemplate; // 0x98 (0x8)
	struct TArray<struct FGuid> ChildPossessables; // 0xa0 (0x10)
	enum ESpawnOwnership Ownership; // 0xb0 (0x1)
	unsigned char unreflected_b1[0x3]; // 0xb1 (0x3) 
	struct FName LevelName; // 0xb4 (0x4)
	unsigned char padding_b8[0x8]; // 0xb8 (0x8)
};

