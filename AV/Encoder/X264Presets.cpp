#include "X264Presets.h"

// This file was generated by 'x264-preset-translator.php', don't edit it.

#if !SSR_USE_AVCODEC_OPT_PRESET

void X264Preset(AVCodecContext* cc, const char* preset) {
	if(strcmp(preset, "ultrafast") == 0)
		X264Preset_ultrafast(cc);
	if(strcmp(preset, "superfast") == 0)
		X264Preset_superfast(cc);
	if(strcmp(preset, "veryfast") == 0)
		X264Preset_veryfast(cc);
	if(strcmp(preset, "faster") == 0)
		X264Preset_faster(cc);
	if(strcmp(preset, "fast") == 0)
		X264Preset_fast(cc);
	if(strcmp(preset, "medium") == 0)
		X264Preset_medium(cc);
	if(strcmp(preset, "slow") == 0)
		X264Preset_slow(cc);
	if(strcmp(preset, "slower") == 0)
		X264Preset_slower(cc);
	if(strcmp(preset, "veryslow") == 0)
		X264Preset_veryslow(cc);
	if(strcmp(preset, "placebo") == 0)
		X264Preset_placebo(cc);
}

void X264Preset_ultrafast(AVCodecContext* cc) {
	cc->coder_type = 0;
	cc->flags &= ~CODEC_FLAG_LOOP_FILTER;
	cc->flags |= CODEC_FLAG_CLOSED_GOP;
	cc->me_cmp |= 1;
	cc->partitions &= ~X264_PART_I8X8;
	cc->partitions &= ~X264_PART_I4X4;
	cc->partitions &= ~X264_PART_P8X8;
	cc->partitions &= ~X264_PART_B8X8;
	cc->me_method = ME_EPZS;
	cc->me_subpel_quality = 0;
	cc->me_range = 16;
	cc->gop_size = 250;
	cc->keyint_min = 25;
	cc->scenechange_threshold = 0;
	cc->i_quant_factor = 0.71;
	cc->b_frame_strategy = 0;
	cc->qcompress = 0.6;
	cc->qmin = 0;
	cc->qmax = 69;
	cc->max_qdiff = 4;
	cc->max_b_frames = 0;
	cc->refs = 1;
	cc->directpred = 1;
	cc->trellis = 0;
	cc->flags2 &= ~CODEC_FLAG2_BPYRAMID;
	cc->flags2 &= ~CODEC_FLAG2_MIXED_REFS;
	cc->flags2 &= ~CODEC_FLAG2_WPRED;
	cc->flags2 &= ~CODEC_FLAG2_8X8DCT;
	cc->flags2 |= CODEC_FLAG2_FASTPSKIP;
	cc->flags2 &= ~CODEC_FLAG2_MBTREE;
	cc->weighted_p_pred = 0;
	cc->aq_mode = 0;
	cc->rc_lookahead = 0;
}

void X264Preset_superfast(AVCodecContext* cc) {
	cc->coder_type = 1;
	cc->flags |= CODEC_FLAG_LOOP_FILTER;
	cc->flags |= CODEC_FLAG_CLOSED_GOP;
	cc->me_cmp |= 1;
	cc->partitions |= X264_PART_I8X8;
	cc->partitions |= X264_PART_I4X4;
	cc->partitions &= ~X264_PART_P8X8;
	cc->partitions &= ~X264_PART_B8X8;
	cc->me_method = ME_EPZS;
	cc->me_subpel_quality = 1;
	cc->me_range = 16;
	cc->gop_size = 250;
	cc->keyint_min = 25;
	cc->scenechange_threshold = 40;
	cc->i_quant_factor = 0.71;
	cc->b_frame_strategy = 1;
	cc->qcompress = 0.6;
	cc->qmin = 0;
	cc->qmax = 69;
	cc->max_qdiff = 4;
	cc->max_b_frames = 3;
	cc->refs = 1;
	cc->directpred = 1;
	cc->trellis = 0;
	cc->flags2 |= CODEC_FLAG2_BPYRAMID;
	cc->flags2 &= ~CODEC_FLAG2_MIXED_REFS;
	cc->flags2 |= CODEC_FLAG2_WPRED;
	cc->flags2 |= CODEC_FLAG2_8X8DCT;
	cc->flags2 |= CODEC_FLAG2_FASTPSKIP;
	cc->flags2 &= ~CODEC_FLAG2_MBTREE;
	cc->weighted_p_pred = 0;
	cc->rc_lookahead = 0;
}

void X264Preset_veryfast(AVCodecContext* cc) {
	cc->coder_type = 1;
	cc->flags |= CODEC_FLAG_LOOP_FILTER;
	cc->flags |= CODEC_FLAG_CLOSED_GOP;
	cc->me_cmp |= 1;
	cc->partitions |= X264_PART_I8X8;
	cc->partitions |= X264_PART_I4X4;
	cc->partitions |= X264_PART_P8X8;
	cc->partitions |= X264_PART_B8X8;
	cc->me_method = ME_HEX;
	cc->me_subpel_quality = 2;
	cc->me_range = 16;
	cc->gop_size = 250;
	cc->keyint_min = 25;
	cc->scenechange_threshold = 40;
	cc->i_quant_factor = 0.71;
	cc->b_frame_strategy = 1;
	cc->qcompress = 0.6;
	cc->qmin = 0;
	cc->qmax = 69;
	cc->max_qdiff = 4;
	cc->max_b_frames = 3;
	cc->refs = 1;
	cc->directpred = 1;
	cc->trellis = 0;
	cc->flags2 |= CODEC_FLAG2_BPYRAMID;
	cc->flags2 &= ~CODEC_FLAG2_MIXED_REFS;
	cc->flags2 |= CODEC_FLAG2_WPRED;
	cc->flags2 |= CODEC_FLAG2_8X8DCT;
	cc->flags2 |= CODEC_FLAG2_FASTPSKIP;
	cc->weighted_p_pred = 0;
	cc->rc_lookahead = 10;
}

void X264Preset_faster(AVCodecContext* cc) {
	cc->coder_type = 1;
	cc->flags |= CODEC_FLAG_LOOP_FILTER;
	cc->flags |= CODEC_FLAG_CLOSED_GOP;
	cc->me_cmp |= 1;
	cc->partitions |= X264_PART_I8X8;
	cc->partitions |= X264_PART_I4X4;
	cc->partitions |= X264_PART_P8X8;
	cc->partitions |= X264_PART_B8X8;
	cc->me_method = ME_HEX;
	cc->me_subpel_quality = 4;
	cc->me_range = 16;
	cc->gop_size = 250;
	cc->keyint_min = 25;
	cc->scenechange_threshold = 40;
	cc->i_quant_factor = 0.71;
	cc->b_frame_strategy = 1;
	cc->qcompress = 0.6;
	cc->qmin = 0;
	cc->qmax = 69;
	cc->max_qdiff = 4;
	cc->max_b_frames = 3;
	cc->refs = 2;
	cc->directpred = 1;
	cc->trellis = 1;
	cc->flags2 |= CODEC_FLAG2_BPYRAMID;
	cc->flags2 &= ~CODEC_FLAG2_MIXED_REFS;
	cc->flags2 |= CODEC_FLAG2_WPRED;
	cc->flags2 |= CODEC_FLAG2_8X8DCT;
	cc->flags2 |= CODEC_FLAG2_FASTPSKIP;
	cc->weighted_p_pred = 1;
	cc->rc_lookahead = 20;
}

void X264Preset_fast(AVCodecContext* cc) {
	cc->coder_type = 1;
	cc->flags |= CODEC_FLAG_LOOP_FILTER;
	cc->flags |= CODEC_FLAG_CLOSED_GOP;
	cc->me_cmp |= 1;
	cc->partitions |= X264_PART_I8X8;
	cc->partitions |= X264_PART_I4X4;
	cc->partitions |= X264_PART_P8X8;
	cc->partitions |= X264_PART_B8X8;
	cc->me_method = ME_HEX;
	cc->me_subpel_quality = 6;
	cc->me_range = 16;
	cc->gop_size = 250;
	cc->keyint_min = 25;
	cc->scenechange_threshold = 40;
	cc->i_quant_factor = 0.71;
	cc->b_frame_strategy = 1;
	cc->qcompress = 0.6;
	cc->qmin = 0;
	cc->qmax = 69;
	cc->max_qdiff = 4;
	cc->max_b_frames = 3;
	cc->refs = 2;
	cc->directpred = 1;
	cc->trellis = 1;
	cc->flags2 |= CODEC_FLAG2_BPYRAMID;
	cc->flags2 |= CODEC_FLAG2_MIXED_REFS;
	cc->flags2 |= CODEC_FLAG2_WPRED;
	cc->flags2 |= CODEC_FLAG2_8X8DCT;
	cc->flags2 |= CODEC_FLAG2_FASTPSKIP;
	cc->weighted_p_pred = 2;
	cc->rc_lookahead = 30;
}

void X264Preset_medium(AVCodecContext* cc) {
	cc->coder_type = 1;
	cc->flags |= CODEC_FLAG_LOOP_FILTER;
	cc->flags |= CODEC_FLAG_CLOSED_GOP;
	cc->me_cmp |= 1;
	cc->partitions |= X264_PART_I8X8;
	cc->partitions |= X264_PART_I4X4;
	cc->partitions |= X264_PART_P8X8;
	cc->partitions |= X264_PART_B8X8;
	cc->me_method = ME_HEX;
	cc->me_subpel_quality = 7;
	cc->me_range = 16;
	cc->gop_size = 250;
	cc->keyint_min = 25;
	cc->scenechange_threshold = 40;
	cc->i_quant_factor = 0.71;
	cc->b_frame_strategy = 1;
	cc->qcompress = 0.6;
	cc->qmin = 0;
	cc->qmax = 69;
	cc->max_qdiff = 4;
	cc->max_b_frames = 3;
	cc->refs = 3;
	cc->directpred = 1;
	cc->trellis = 1;
	cc->flags2 |= CODEC_FLAG2_BPYRAMID;
	cc->flags2 |= CODEC_FLAG2_MIXED_REFS;
	cc->flags2 |= CODEC_FLAG2_WPRED;
	cc->flags2 |= CODEC_FLAG2_8X8DCT;
	cc->flags2 |= CODEC_FLAG2_FASTPSKIP;
	cc->weighted_p_pred = 2;
}

void X264Preset_slow(AVCodecContext* cc) {
	cc->coder_type = 1;
	cc->flags |= CODEC_FLAG_LOOP_FILTER;
	cc->flags |= CODEC_FLAG_CLOSED_GOP;
	cc->me_cmp |= 1;
	cc->partitions |= X264_PART_I8X8;
	cc->partitions |= X264_PART_I4X4;
	cc->partitions |= X264_PART_P8X8;
	cc->partitions |= X264_PART_B8X8;
	cc->me_method = ME_UMH;
	cc->me_subpel_quality = 8;
	cc->me_range = 16;
	cc->gop_size = 250;
	cc->keyint_min = 25;
	cc->scenechange_threshold = 40;
	cc->i_quant_factor = 0.71;
	cc->b_frame_strategy = 2;
	cc->qcompress = 0.6;
	cc->qmin = 0;
	cc->qmax = 69;
	cc->max_qdiff = 4;
	cc->max_b_frames = 3;
	cc->refs = 5;
	cc->directpred = 3;
	cc->trellis = 1;
	cc->flags2 |= CODEC_FLAG2_BPYRAMID;
	cc->flags2 |= CODEC_FLAG2_MIXED_REFS;
	cc->flags2 |= CODEC_FLAG2_WPRED;
	cc->flags2 |= CODEC_FLAG2_8X8DCT;
	cc->flags2 |= CODEC_FLAG2_FASTPSKIP;
	cc->weighted_p_pred = 2;
	cc->rc_lookahead = 50;
}

void X264Preset_slower(AVCodecContext* cc) {
	cc->coder_type = 1;
	cc->flags |= CODEC_FLAG_LOOP_FILTER;
	cc->flags |= CODEC_FLAG_CLOSED_GOP;
	cc->me_cmp |= 1;
	cc->partitions |= X264_PART_I8X8;
	cc->partitions |= X264_PART_I4X4;
	cc->partitions |= X264_PART_P8X8;
	cc->partitions |= X264_PART_P4X4;
	cc->partitions |= X264_PART_B8X8;
	cc->me_method = ME_UMH;
	cc->me_subpel_quality = 9;
	cc->me_range = 16;
	cc->gop_size = 250;
	cc->keyint_min = 25;
	cc->scenechange_threshold = 40;
	cc->i_quant_factor = 0.71;
	cc->b_frame_strategy = 2;
	cc->qcompress = 0.6;
	cc->qmin = 0;
	cc->qmax = 69;
	cc->max_qdiff = 4;
	cc->max_b_frames = 3;
	cc->refs = 8;
	cc->directpred = 3;
	cc->trellis = 2;
	cc->flags2 |= CODEC_FLAG2_BPYRAMID;
	cc->flags2 |= CODEC_FLAG2_MIXED_REFS;
	cc->flags2 |= CODEC_FLAG2_WPRED;
	cc->flags2 |= CODEC_FLAG2_8X8DCT;
	cc->flags2 |= CODEC_FLAG2_FASTPSKIP;
	cc->weighted_p_pred = 2;
	cc->rc_lookahead = 60;
}

void X264Preset_veryslow(AVCodecContext* cc) {
	cc->coder_type = 1;
	cc->flags |= CODEC_FLAG_LOOP_FILTER;
	cc->flags |= CODEC_FLAG_CLOSED_GOP;
	cc->me_cmp |= 1;
	cc->partitions |= X264_PART_I8X8;
	cc->partitions |= X264_PART_I4X4;
	cc->partitions |= X264_PART_P8X8;
	cc->partitions |= X264_PART_P4X4;
	cc->partitions |= X264_PART_B8X8;
	cc->me_method = ME_UMH;
	cc->me_subpel_quality = 10;
	cc->me_range = 24;
	cc->gop_size = 250;
	cc->keyint_min = 25;
	cc->scenechange_threshold = 40;
	cc->i_quant_factor = 0.71;
	cc->b_frame_strategy = 2;
	cc->qcompress = 0.6;
	cc->qmin = 0;
	cc->qmax = 69;
	cc->max_qdiff = 4;
	cc->max_b_frames = 8;
	cc->refs = 16;
	cc->directpred = 3;
	cc->trellis = 2;
	cc->flags2 |= CODEC_FLAG2_BPYRAMID;
	cc->flags2 |= CODEC_FLAG2_MIXED_REFS;
	cc->flags2 |= CODEC_FLAG2_WPRED;
	cc->flags2 |= CODEC_FLAG2_8X8DCT;
	cc->flags2 |= CODEC_FLAG2_FASTPSKIP;
	cc->weighted_p_pred = 2;
	cc->rc_lookahead = 60;
}

void X264Preset_placebo(AVCodecContext* cc) {
	cc->coder_type = 1;
	cc->flags |= CODEC_FLAG_LOOP_FILTER;
	cc->flags |= CODEC_FLAG_CLOSED_GOP;
	cc->me_cmp |= 1;
	cc->partitions |= X264_PART_I8X8;
	cc->partitions |= X264_PART_I4X4;
	cc->partitions |= X264_PART_P8X8;
	cc->partitions |= X264_PART_P4X4;
	cc->partitions |= X264_PART_B8X8;
	cc->me_method = ME_TESA;
	cc->me_subpel_quality = 10;
	cc->me_range = 24;
	cc->gop_size = 250;
	cc->keyint_min = 25;
	cc->scenechange_threshold = 40;
	cc->i_quant_factor = 0.71;
	cc->b_frame_strategy = 2;
	cc->qcompress = 0.6;
	cc->qmin = 0;
	cc->qmax = 69;
	cc->max_qdiff = 4;
	cc->max_b_frames = 16;
	cc->refs = 16;
	cc->directpred = 3;
	cc->trellis = 2;
	cc->flags2 |= CODEC_FLAG2_BPYRAMID;
	cc->flags2 |= CODEC_FLAG2_MIXED_REFS;
	cc->flags2 |= CODEC_FLAG2_WPRED;
	cc->flags2 |= CODEC_FLAG2_8X8DCT;
	cc->flags2 &= ~CODEC_FLAG2_FASTPSKIP;
	cc->weighted_p_pred = 2;
	cc->rc_lookahead = 60;
}

#endif
