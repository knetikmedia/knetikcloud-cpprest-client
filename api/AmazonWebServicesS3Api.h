/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * AmazonWebServicesS3Api.h
 *
 * 
 */

#ifndef AmazonWebServicesS3Api_H_
#define AmazonWebServicesS3Api_H_


#include "ApiClient.h"

#include "AmazonS3Activity.h"
#include "Result.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  AmazonWebServicesS3Api
{
public:
    AmazonWebServicesS3Api( std::shared_ptr<ApiClient> apiClient );
    virtual ~AmazonWebServicesS3Api();
    /// <summary>
    /// Get a temporary signed S3 URL for download
    /// </summary>
    /// <remarks>
    /// To give access to files in your own S3 account, you will need to grant KnetikcCloud access to the file by adjusting your bucket policy accordingly. See S3 documentation for details.
    /// </remarks>
    /// <param name="bucket">S3 bucket name (optional)</param>/// <param name="path">The path to the file relative the bucket (the s3 object key) (optional)</param>/// <param name="expiration">The number of seconds this URL will be valid. Default to 60 (optional, default to 60)</param>
    pplx::task<utility::string_t> getDownloadURL(utility::string_t bucket, utility::string_t path, int32_t expiration);
    /// <summary>
    /// Get a signed S3 URL for upload
    /// </summary>
    /// <remarks>
    /// Requires the file name and file content type (i.e., &#39;video/mpeg&#39;). Make a PUT to the resulting url to upload the file and use the cdn_url to retrieve it after.
    /// </remarks>
    /// <param name="filename">The file name (optional)</param>/// <param name="contentType">The content type (optional)</param>
    pplx::task<std::shared_ptr<AmazonS3Activity>> getSignedS3URL(utility::string_t filename, utility::string_t contentType);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* AmazonWebServicesS3Api_H_ */
