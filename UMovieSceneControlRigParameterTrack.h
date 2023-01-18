// Class /Script/ControlRig.MovieSceneControlRigParameterTrack
// Size: 0x100
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{
	unsigned char unreflected_98[0x40]; // 0x98 (0x40) 
	class UControlRig* ControlRig; // 0xd8 (0x8)
	class UMovieSceneSection* SectionToKey; // 0xe0 (0x8)
	struct TArray<class UMovieSceneSection*> Sections; // 0xe8 (0x10)
	struct FName trackName; // 0xf8 (0x4)
	unsigned char padding_fc[0x4]; // 0xfc (0x4)
};

