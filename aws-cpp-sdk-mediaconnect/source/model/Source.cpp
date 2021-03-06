﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/mediaconnect/model/Source.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

Source::Source() : 
    m_decryptionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_entitlementArnHasBeenSet(false),
    m_ingestIpHasBeenSet(false),
    m_ingestPort(0),
    m_ingestPortHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_transportHasBeenSet(false),
    m_whitelistCidrHasBeenSet(false)
{
}

Source::Source(JsonView jsonValue) : 
    m_decryptionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_entitlementArnHasBeenSet(false),
    m_ingestIpHasBeenSet(false),
    m_ingestPort(0),
    m_ingestPortHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_transportHasBeenSet(false),
    m_whitelistCidrHasBeenSet(false)
{
  *this = jsonValue;
}

Source& Source::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("decryption"))
  {
    m_decryption = jsonValue.GetObject("decryption");

    m_decryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entitlementArn"))
  {
    m_entitlementArn = jsonValue.GetString("entitlementArn");

    m_entitlementArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ingestIp"))
  {
    m_ingestIp = jsonValue.GetString("ingestIp");

    m_ingestIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ingestPort"))
  {
    m_ingestPort = jsonValue.GetInteger("ingestPort");

    m_ingestPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceArn"))
  {
    m_sourceArn = jsonValue.GetString("sourceArn");

    m_sourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transport"))
  {
    m_transport = jsonValue.GetObject("transport");

    m_transportHasBeenSet = true;
  }

  if(jsonValue.ValueExists("whitelistCidr"))
  {
    m_whitelistCidr = jsonValue.GetString("whitelistCidr");

    m_whitelistCidrHasBeenSet = true;
  }

  return *this;
}

JsonValue Source::Jsonize() const
{
  JsonValue payload;

  if(m_decryptionHasBeenSet)
  {
   payload.WithObject("decryption", m_decryption.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_entitlementArnHasBeenSet)
  {
   payload.WithString("entitlementArn", m_entitlementArn);

  }

  if(m_ingestIpHasBeenSet)
  {
   payload.WithString("ingestIp", m_ingestIp);

  }

  if(m_ingestPortHasBeenSet)
  {
   payload.WithInteger("ingestPort", m_ingestPort);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("sourceArn", m_sourceArn);

  }

  if(m_transportHasBeenSet)
  {
   payload.WithObject("transport", m_transport.Jsonize());

  }

  if(m_whitelistCidrHasBeenSet)
  {
   payload.WithString("whitelistCidr", m_whitelistCidr);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
