/**
 *
 * @file UMBlendShapeChannelMsg.h
 *
 * @author tori31001 at gmail.com
 *
 *
 * Copyright (C) 2014 Kazuma Hatta
 * Licensed under the MIT or GPL Version 3 licenses. 
 *
 */
	
#ifdef WITH_MSGPACK
	typedef msgpack::type::tuple<
	UMShape::ShapeList,
	DoubleList,
	double
	> blend_shape_channel_msg_type;
	
	template <typename Stream>
	void msgpack_pack(msgpack::packer<Stream>& o) const {
		o.pack(blend_shape_channel_msg_type(
							target_shape_list_,
							full_weight_list_,
							deform_percent_));
	}
	
	void msgpack_unpack(blend_shape_channel_msg_type v) {
		target_shape_list_ = v.get<0>();
		full_weight_list_ = v.get<1>();
		deform_percent_ = v.get<2>();
	}
#endif //WITH_MSGPACK
	