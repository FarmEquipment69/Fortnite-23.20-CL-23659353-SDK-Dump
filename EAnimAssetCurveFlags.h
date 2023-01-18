// Enum /Script/Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8_t
{
  AACF_NONE = 0,
  AACF_DriveMorphTarget_DEPRECATED = 1,
  AACF_DriveAttribute_DEPRECATED = 2,
  AACF_Editable = 4,
  AACF_DriveMaterial_DEPRECATED = 8,
  AACF_Metadata = 16,
  AACF_DriveTrack = 32,
  AACF_Disabled = 64,
  AACF_MAX = 65
};