/*----------------------------------------------------------------------------
 * Copyright (c) <2016-2018>, <Huawei Technologies Co., Ltd>
 * All rights reserved.
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright notice, this list of
 * conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice, this list
 * of conditions and the following disclaimer in the documentation and/or other materials
 * provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of its contributors may be used
 * to endorse or promote products derived from this software without specific prior written
 * permission.
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *---------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------
 * Notice of Export Control Law
 * ===============================================
 * Huawei LiteOS may be subject to applicable export control laws and regulations, which might
 * include those applicable to Huawei LiteOS of U.S. and the country in which you are located.
 * Import, export and usage of Huawei LiteOS in any manner by you shall be in compliance with such
 * applicable export control laws and regulations.
 *---------------------------------------------------------------------------*/

/* Define to prevent recursive inclusion ------------------------------------*/
#ifndef __TEST_MQTT_CLIENT_H__
#define __TEST_MQTT_CLIENT_H__

/* Includes -----------------------------------------------------------------*/
#include <cpptest.h>
#include "stub.h"
#include "MQTTClient.h"
#include "MQTTliteos.h"
#include "atiny_mqtt/mqtt_client.h"
#include "adapter_layer.h"

/* Defines ------------------------------------------------------------------*/
/* Macros -------------------------------------------------------------------*/
/* Typedefs -----------------------------------------------------------------*/
/* Extern variables ---------------------------------------------------------*/
/* Functions API ------------------------------------------------------------*/
class TestMQTT_Client : public Test::Suite
{
public:

    TestMQTT_Client();
    ~TestMQTT_Client();


	void test_atiny_mqtt_init(void);
	void test_atiny_mqtt_deinit(void);
	void test_atiny_mqtt_isconnected(void);
	void test_atiny_mqtt_bind(void);
	void test_atiny_mqtt_data_send(void);
	void test_atiny_mqtt_dup_dev_info(void);
	void test_atiny_mqtt_subscribe_topic(void);
	void test_atiny_mqtt_bind_add(void);
	void test_atiny_mqtt_dup_devi_info(void);
	void test_atiny_mqtt_get_send_pw(void);
	void test_atiny_mqttconnect(void);
	void test_atiny_cjsparse(void);
	void test_atiny_mqtt_recv_cmd_topic(void);
	void test_mqtt_proc_connect_nack(void);
	void test_mqtt_proc_connect_nack1(void);
	void test_mqtt_clientInit_fail(void);
	void test_mqtt_networkconnect_fail(void);
	void test_mqtt_cmd_ioctrlfail(void);
	void test_mqtt_dup_devinfo_fail(void);
	void test_mqtt_dup_info_fail(void);
	void test_mqtt_dup_devin_fail(void);
	
	
protected:
    void setup();
    void tear_down();
};



#endif /* __TEST_AGENTTINY_H__ */
