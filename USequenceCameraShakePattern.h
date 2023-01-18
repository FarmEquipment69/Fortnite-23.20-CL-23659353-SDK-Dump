// Class /Script/TemplateSequence.SequenceCameraShakePattern
// Size: 0x58
class USequenceCameraShakePattern : public UCameraShakePattern
{
	class UCameraAnimationSequence* Sequence; // 0x28 (0x8)
	float PlayRate; // 0x30 (0x4)
	float Scale; // 0x34 (0x4)
	float BlendInTime; // 0x38 (0x4)
	float BlendOutTime; // 0x3c (0x4)
	float RandomSegmentDuration; // 0x40 (0x4)
	bool bRandomSegment; // 0x44 (0x1)
	unsigned char unreflected_45[0x3]; // 0x45 (0x3) 
	class UCameraAnimationSequencePlayer* Player; // 0x48 (0x8)
	class UCameraAnimationSequenceCameraStandIn* CameraStandIn; // 0x50 (0x8)
};

