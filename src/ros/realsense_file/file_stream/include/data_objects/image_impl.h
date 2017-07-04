// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2017 Intel Corporation. All Rights Reserved.
#pragma once
#include "include/data_objects/image.h"

namespace rs
{
    namespace file_format
    {
        namespace ros_data_objects
        {
            class image_impl : public image
            {
            private:
                image_info m_info;

            public:

                image_impl(const image_info& info);

                virtual ~image_impl();

                virtual file_types::sample_type get_type() const override;

                virtual status write_data(std::shared_ptr<ros_writer> file) override;

                virtual const image_info& get_info() const override;

                virtual void set_info(const image_info& info) override;
            };
        }
    }
}
