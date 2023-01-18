// Class /Script/MovieSceneTracks.MovieScene3DAttachSection
// Size: 0x130
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
	unsigned char unreflected_118[0x8]; // 0x118 (0x8) 
	struct FName AttachSocketName; // 0x120 (0x4)
	struct FName AttachComponentName; // 0x124 (0x4)
	enum EAttachmentRule AttachmentLocationRule; // 0x128 (0x1)
	enum EAttachmentRule AttachmentRotationRule; // 0x129 (0x1)
	enum EAttachmentRule AttachmentScaleRule; // 0x12a (0x1)
	enum EDetachmentRule DetachmentLocationRule; // 0x12b (0x1)
	enum EDetachmentRule DetachmentRotationRule; // 0x12c (0x1)
	enum EDetachmentRule DetachmentScaleRule; // 0x12d (0x1)
	unsigned char padding_12e[0x2]; // 0x12e (0x2)
};

