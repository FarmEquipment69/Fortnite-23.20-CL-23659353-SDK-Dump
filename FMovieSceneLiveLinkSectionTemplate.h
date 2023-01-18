// ScriptStruct /Script/LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
// Size: 0xb8
struct FMovieSceneLiveLinkSectionTemplate : FMovieScenePropertySectionTemplate
{
	struct FLiveLinkSubjectPreset SubjectPreset; // 0x38 (0x38)
	struct TArray<bool> ChannelMask; // 0x70 (0x10)
	struct TArray<struct FLiveLinkSubSectionData> SubSectionsData; // 0x80 (0x10)
	unsigned char padding_90[0x28]; // 0x90 (0x28)
};

