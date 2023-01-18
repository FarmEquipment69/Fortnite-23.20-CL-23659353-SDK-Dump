// Class /Script/MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// Size: 0x160
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
	unsigned char unreflected_98[0x8]; // 0x98 (0x8) 
	struct TArray<class UMovieSceneSection*> AnimationSections; // 0xa0 (0x10)
	bool bUseLegacySectionIndexBlend; // 0xb0 (0x1)
	unsigned char unreflected_b1[0xf]; // 0xb1 (0xf) 
	struct FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams; // 0xc0 (0x90)
	bool bBlendFirstChildOfRoot; // 0x150 (0x1)
	unsigned char padding_151[0xf]; // 0x151 (0xf)
};

