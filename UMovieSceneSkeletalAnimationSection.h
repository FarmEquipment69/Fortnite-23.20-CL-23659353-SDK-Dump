// Class /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Size: 0x340
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
	struct FMovieSceneSkeletalAnimationParams Params; // 0xf0 (0x148)
	class UAnimSequence* AnimSequence; // 0x238 (0x8)
	class UAnimSequenceBase* Animation; // 0x240 (0x8)
	float StartOffset; // 0x248 (0x4)
	float EndOffset; // 0x24c (0x4)
	float PlayRate; // 0x250 (0x4)
	unsigned char bReverse; // 0x254 (0x1)
	unsigned char unreflected_255[0x3]; // 0x255 (0x3) 
	struct FName SlotName; // 0x258 (0x4)
	unsigned char unreflected_25c[0x4]; // 0x25c (0x4) 
	struct FVector StartLocationOffset; // 0x260 (0x18)
	struct FRotator StartRotationOffset; // 0x278 (0x18)
	bool bMatchWithPrevious; // 0x290 (0x1)
	unsigned char unreflected_291[0x3]; // 0x291 (0x3) 
	struct FName MatchedBoneName; // 0x294 (0x4)
	struct FVector MatchedLocationOffset; // 0x298 (0x18)
	struct FRotator MatchedRotationOffset; // 0x2b0 (0x18)
	bool bMatchTranslation; // 0x2c8 (0x1)
	bool bMatchIncludeZHeight; // 0x2c9 (0x1)
	bool bMatchRotationYaw; // 0x2ca (0x1)
	bool bMatchRotationPitch; // 0x2cb (0x1)
	bool bMatchRotationRoll; // 0x2cc (0x1)
	unsigned char padding_2cd[0x73]; // 0x2cd (0x73)
};

