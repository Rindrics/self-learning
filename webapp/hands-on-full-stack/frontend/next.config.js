/** @type {import('next').NextConfig} */
const nextConfig = {}

module.exports = {
    async rewrites() {
        return [
            {
                source: '/api/:path*',
                destination: 'http://host.docker.internal:3000/api/:path*',
            },
        ]
    },
};
