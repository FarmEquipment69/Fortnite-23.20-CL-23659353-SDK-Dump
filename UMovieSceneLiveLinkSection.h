// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSection
// Size: 0x230
class UMovieSceneLiveLinkSection : public UMovieSceneSection
{
	struct FLiveLinkSubjectPreset SubjectPreset; // 0xf0 (0x38)
	struct TArray<bool> ChannelMask; // 0x128 (0x10)
	struct TArray<class UMovieSceneLiveLinkSubSection*> SubSections; // 0x138 (0x10)
	unsigned char unreflected_148[0x10]; // 0x148 (0x10) 
	struct FName SubjectName; // 0x158 (0x4)
	unsigned char unreflected_15c[0x4]; // 0x15c (0x4) 
	struct FLiveLinkFrameData TemplateToPush; // 0x160 (0x90)
	struct FLiveLinkRefSkeleton RefSkeleton; // 0x1f0 (0x20)
	struct TArray<struct FName> CurveNames; // 0x210 (0x10)
	struct TArray<struct FMovieSceneFloatChannel> PropertyFloatChannels; // 0x220 (0x10)
};

