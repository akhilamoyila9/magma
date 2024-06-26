/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the terms found in the LICENSE file in the root of this source tree.
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

#pragma once

#include <stdint.h>

// Nothing needed in message for now, but an empty struct is a c-c++
// compatibility risk (sizeof zero bytes in c, sizeof one byte in c++).
// Therefore we allocate an unused uint8_t to ensure sizes are always 1 byte.
typedef struct application_healthy_msg {
  uint8_t unused;
} application_healthy_msg_t;

// Nothing needed in message for now, but an empty struct is a c-c++
// compatibility risk (sizeof zero bytes in c, sizeof one byte in c++).
// Therefore we allocate an unused int32_t to ensure sizes are always 1 byte.
typedef struct application_unhealthy_msg {
  uint8_t unused;
} application_unhealthy_msg_t;

// Message capturing stats as communicated by the mme_app
typedef struct application_mme_app_stats_msg {
  uint32_t nb_ue_attached;
  uint32_t nb_ue_connected;
  uint32_t nb_default_eps_bearers;
  uint32_t nb_s1u_bearers;
  uint32_t nb_mme_app_last_msg_latency;
} application_mme_app_stats_msg_t;

typedef struct application_s1ap_stats_msg {
  uint32_t nb_enb_connected;
  uint32_t nb_s1ap_last_msg_latency;
} application_s1ap_stats_msg_t;

typedef struct application_amf_app_stats_msg {
  uint32_t nb_ue_connected;
  uint32_t nb_ue_attached;
  uint32_t nb_pdu_sessions;
  uint32_t nb_ue_idle;
} application_amf_app_stats_msg_t;

typedef struct application_ngap_stats_msg {
  uint32_t nb_gnb_connected;
} application_ngap_stats_msg_t;
